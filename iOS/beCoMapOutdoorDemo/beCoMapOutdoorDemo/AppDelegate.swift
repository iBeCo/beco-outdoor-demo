//
//  AppDelegate.swift
//  beCoMapOutdoorDemo
//
//  Created by SayOne Technologies on 14/10/20.
//  Copyright © 2020 GlobeCo Technologies Pvt Ltd. All rights reserved.
//

import UIKit
import beCoMapOutdoor

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        let beCoServices = BeCoServices.sharedInstance()
        beCoServices.configureWith(usageToken: "ce366d96bc01ef1a6e9ba2da04e5ec3772826afc")
        beCoServices.provideAPIKey("XXXXXX-Google_API_KEY_XXXXXXXXXX")
        return true
    }

}

