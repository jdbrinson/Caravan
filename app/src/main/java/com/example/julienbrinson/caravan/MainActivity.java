package com.example.julienbrinson.caravan;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    //used to load the libraries
    static {
        //System.loadLibrary("native-lib");
        System.loadLibrary("boost-time");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

    }
    /*
    * A native method from native-lib
    *
     */
    //public native void
}
