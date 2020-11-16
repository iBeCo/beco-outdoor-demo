//
//  ViewController.swift
//  MapOutdoorTest
//
//  Created by SayOne Technologies on 17/10/20.
//

import UIKit
import beCoMapOutdoor

class ViewController: UIViewController {
    
    var beCoMap: BEMapView?

    override func viewDidLoad() {
        super.viewDidLoad()
        
        beCoMap = BEMapView.init(frame: .zero)
        beCoMap!.loadSite("global-village", name: "Global Village Dubai")//test-environment , global-village , wtc2 , kumbanad
        view = beCoMap!
        beCoMap!.mapDelegate = self
    }
}

extension ViewController: BEMapViewDelegate {
    
    func becoView(_ mapView: BEMapView, didLoadWith site: BESite) {
        let points: [Int32] = [5215,5505]
        beCoMap!.drawRouteWith(points)
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
