//
//  HomeViewController.swift
//  beCoMapOutdoorDemo
//
//  Created by SayOne Technologies on 17/03/23.
//  Copyright © 2023 GlobeCo Technologies Pvt Ltd. All rights reserved.
//

import UIKit
import CoreLocation

class HomeViewController: UIViewController {

    @IBOutlet var switchh: UISwitch!
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    @IBAction func switchAction(_ sender: Any) {
    }

    @IBAction func showMap(_ sender: UIButton) {
        let tab = tabBarController as! TabBarController
        let controller = switchh.isOn ? tab.mapViewController.viewControllers.first as! MapViewController : self.storyboard?.instantiateViewController(withIdentifier: "MapViewController") as! MapViewController
        
        switch sender.tag {
        case 0:
            let parkingloc = CLLocationCoordinate2D.init(latitude: 25.06931, longitude: 55.30819)
            controller.locationPoint = parkingloc
            controller.locationName = "Parking"
        case 1:
            let points: [String] = ["India","Egypt","Turkey"]
            controller.stopPoints = points
        default:
            break
        }
        
        if switchh.isOn {
            self.tabBarController?.selectedIndex = 1
        } else {
            self.navigationController?.pushViewController(controller, animated: true)
        }
    }
}
