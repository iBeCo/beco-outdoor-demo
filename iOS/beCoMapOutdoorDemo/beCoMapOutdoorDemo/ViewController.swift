//
//  ViewController.swift
//  beCoMapOutdoorDemo
//
//  Created by SayOne Technologies on 14/10/20.
//  Copyright © 2020 GlobeCo Technologies Pvt Ltd. All rights reserved.
//

import UIKit
import beCoMapOutdoor

class ViewController: UIViewController {
    
    
    var beCoMap : BEMapView?

    override func viewDidLoad() {
        super.viewDidLoad()
        
        beCoMap = BEMapView.init(frame: .zero)
        beCoMap!.loadSite("global-village-21-22", name: "Thrissur", language: .english)//test-environment , global-village , wtc2 , kumbanad
        view = beCoMap
        beCoMap!.mapDelegate = self
    }
}

extension ViewController: BEMapViewDelegate {
    
    func becoView(_ mapView: BEMapView, didLoadWith site: BESite) {
        //let points: [String] = ["India","Pakistan"]
        //beCoMap!.drawRouteWithName(points)
        //beCoMap!.selectPointWithName("India")
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

