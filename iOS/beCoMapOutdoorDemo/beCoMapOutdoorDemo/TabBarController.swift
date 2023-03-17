//
//  TabBarController.swift
//  beCoMapOutdoorDemo
//
//  Created by SayOne Technologies on 17/03/23.
//  Copyright © 2023 GlobeCo Technologies Pvt Ltd. All rights reserved.
//

import UIKit

class TabBarController: UITabBarController {
    
    lazy var homeViewController: UINavigationController = {
        let navController = self.storyboard?.instantiateViewController(withIdentifier: "HomeNavController") as! UINavigationController
        return navController
    }()
    
    lazy var mapViewController: UINavigationController = {
        let navController = self.storyboard?.instantiateViewController(withIdentifier: "MapNavController") as! UINavigationController
        return navController
    }()
    
    lazy var settingsViewController: UINavigationController = {
        let navController = self.storyboard?.instantiateViewController(withIdentifier: "SettingsNavController") as! UINavigationController
        return navController
    }()

    override func viewDidLoad() {
        super.viewDidLoad()
        let tabs = [homeViewController,mapViewController,settingsViewController]
        viewControllers = tabs
    }
    

}
