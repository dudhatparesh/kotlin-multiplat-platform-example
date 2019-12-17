//
//  ViewController.swift
//  kotlin-multiplatform-ios
//
//  Created by PARESH DUDHAT on 16/12/19.
//  Copyright © 2019 Tachyon Solution. All rights reserved.
//

import UIKit
import kotlin_multiplat_platform_example

class ViewController: UIViewController {

    @IBOutlet weak var label: UILabel!
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }
    
    @IBAction func buttonWithoutTimeOutClicked(_ sender: Any) {
        label.text = "Doing API call"
        let dispatchers = AppDispatchersImpl()
        let userPresentation = UserPresentation(dispatchers: dispatchers)
        userPresentation.fetchUsersWithoutTimeout(handler:{ (user) in
            
                self.label.text = user.userName
            
        })
        
    }
    
    @IBAction func buttonWithTimeOutClicked(_ sender: Any) {
        label.text = "Doing API call"
        let dispatchers = AppDispatchersImpl()
        let userPresentation = UserPresentation(dispatchers: dispatchers)
        
        do {
            try  userPresentation.fetchUsersWithTimeOut(timeoutInMillis:10000,handler:{ (user) in
               
                    self.label.text = user.userName
                
            })
        } catch let error {
            self.label.text = error.localizedDescription
        }
        
        
    }
    
    @IBAction func buttonWithAsyncAndTimeOutClicked(_ sender: Any) {
        label.text = "Doing API call"
        let dispatchers = AppDispatchersImpl()
        let userPresentation = UserPresentation(dispatchers: dispatchers)
        
        do {
            try  userPresentation.fetchUsersAsyncWithTimeOut(timeoutInMillis:10000,handler:{ (user) in
               
                    self.label.text = user.userName
                
            })
        } catch let error {
            self.label.text = error.localizedDescription
        }
        
        
    }
    @IBAction func buttonWithAsyncAndWithoutTimeOutClicked(_ sender: Any) {
        label.text = "Doing API call"
        let dispatchers = AppDispatchersImpl()
        let userPresentation = UserPresentation(dispatchers: dispatchers)
        
        do {
            try  userPresentation.fetchUsersAsyncWithTimeOut(timeoutInMillis:10000,handler:{ (user) in
               
                    self.label.text = user.userName
                
            })
        } catch let error {
            self.label.text = error.localizedDescription
        }
        
        
    }
}

