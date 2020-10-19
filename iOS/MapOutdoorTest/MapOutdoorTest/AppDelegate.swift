//
//  AppDelegate.swift
//  MapOutdoorTest
//
//  Created by SayOne Technologies on 17/10/20.
//

import UIKit
import beCoMapOutdoor

@main
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        let beCoServices = BeCoServices.sharedInstance()
        beCoServices.configureWith(usageToken: "46e0b696979896d8b1ef4118f0ace9b096dc210c")
        beCoServices.provideAPIKey("AIzaSyCNLwu4eStBI-VeTFeNV7Gow35dMsr82ak")
        return true
    }

}

