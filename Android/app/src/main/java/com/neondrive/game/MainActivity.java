package com.neondrive.game;

import android.app.Activity;
import android.os.Bundle;

public class MainActivity extends Activity {

    static {
        System.loadLibrary("neondrive");
    }

    private native void nativeStart();

    @Override
    protected void onCreate(Bundle state) {
        super.onCreate(state);

        nativeStart();
    }
}
