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

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let beCoMap = BEMapView.init(frame: .zero)
        beCoMap.loadSite("global-village", name: "Global Village Dubai")
        beCoMap.mapDelegate = self
        view = beCoMap
    }
}

extension ViewController: BEMapViewDelegate {
    
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

