//
//  ViewController.swift
//  beCoMapOutdoorDemo
//
//  Created by SayOne Technologies on 14/10/20.
//  Copyright © 2020 GlobeCo Technologies Pvt Ltd. All rights reserved.
//

import UIKit
import CoreLocation
import beCoMapOutdoor

class MapViewController: UIViewController {
    
    enum MapAction {
        case NoAction
        case SelectPoint
        case DrawRouteWithPoints
        case DrawRouteToLocation
    }
    var beCoMap : BEMapView = BEMapView.init(frame: .zero)
    var mapAction: MapAction = .NoAction
    
    var locationName: String?
    var locationPoint: CLLocationCoordinate2D? {
        didSet {
            if let _ = locationPoint {
                mapAction = .DrawRouteToLocation
            } else {
                mapAction = .NoAction
            }
        }
    }
    
    var stopPoints = [String]() {
        didSet {
            if stopPoints.count > 0 {
                mapAction = .DrawRouteWithPoints
            } else {
                mapAction = .NoAction
            }
        }
    }
    
    var selectedPoint: String? {
        didSet {
            if let _ = selectedPoint {
                mapAction = .SelectPoint
            } else {
                mapAction = .NoAction
            }
        }
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        beCoMap.loadSite("global-village-22-23", name: "Dubai", language: .english)
        beCoMap.mapDelegate = self
        view = beCoMap
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        performMapOperation()
    }
    
    private func performMapOperation() {
        switch mapAction {
        case .DrawRouteToLocation:
            if let selectedLocation = locationPoint {
                beCoMap.drawRouteToLocation(selectedLocation, with: locationName ?? "Parking")
                print("Simulating parking")
            }
        case .DrawRouteWithPoints:
            let points: [String] = ["India","Egypt","Turkey"]
            beCoMap.drawRouteWithName(points, startForUserlocation: true)
            print("Simulating Poiny to point")
        case .SelectPoint:
            beCoMap.selectPointWithName("India")
            print("Simulating Select Point")
        default:
            break
        }
    }
}

extension MapViewController: BEMapViewDelegate {
    
    func becoView(_ mapView: BEMapView, didLoadWith site: BESite) {
        print("Map View loaded, Performing map operation if needed")
        performMapOperation()
    }
    
    func becoMapView(_ mapView: BEMapView, didFailedWith error: Error) {
        print("error \(error)")
    }
    
    func becoMapView(_ mapView: BEMapView, userDidReached point: BEPoint) {
        print("deleagte point \(point)")
    }
    
    func becoMapView(_ mapView: BEMapView, didBeaconDetect uuid: String, major: Int32, minor: Int32) {
        print("beacon uuid: \(uuid),major: \(major),minor: \(minor)")
    }
}

