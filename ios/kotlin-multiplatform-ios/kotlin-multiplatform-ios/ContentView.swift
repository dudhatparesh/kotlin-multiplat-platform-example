//
//  ContentView.swift
//  kotlin-multiplatform-ios
//
//  Created by PARESH DUDHAT on 16/12/19.
//  Copyright © 2019 Tachyon Solution. All rights reserved.
//

import SwiftUI
import kotlin_multiplat_platform_example
struct ContentView: View {
    var body: some View {
        Text(SampleKt.hello())
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
