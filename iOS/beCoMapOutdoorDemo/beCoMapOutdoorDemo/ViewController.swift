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

class ViewController: UIViewController {
    
    
    var beCoMap : BEMapView?

    override func viewDidLoad() {
        super.viewDidLoad()
        
        beCoMap = BEMapView.init(frame: .zero)
        beCoMap!.loadSite("global-village-22-23", name: "Thrissur", language: .english)//test-environment , global-village , wtc2 , kumbanad
        view = beCoMap
        beCoMap!.mapDelegate = self
    }
}

extension ViewController: BEMapViewDelegate {
    
    func becoView(_ mapView: BEMapView, didLoadWith site: BESite) {
        DispatchQueue.main.asyncAfter(deadline: .now() + 5.0) {
            DispatchQueue.main.async { [weak self] in
                if let strongSelf = self {
                    let parkingloc = CLLocationCoordinate2D.init(latitude: 25.07157095919638, longitude: 55.31000836488759)
                    strongSelf.beCoMap!.drawRouteToLocation(parkingloc, with: "Parking")
                    print("Simulating parking")
                    
//                    let points: [String] = ["IBM","Waiting Area","Lulu Cyber Tower 1"]
//                    strongSelf.beCoMap!.drawRouteWithName(points, startForUserlocation: true)
//                    print("Simulating Poiny to point")
                }
            }
        }
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

