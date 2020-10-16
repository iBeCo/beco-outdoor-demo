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
        beCoServices.configureWith(usageToken: "46e0b696979896d8b1ef4118f0ace9b096dc210c")
        beCoServices.provideAPIKey("AIzaSyCNLwu4eStBI-VeTFeNV7Gow35dMsr82ak")
        return true
    }

}

