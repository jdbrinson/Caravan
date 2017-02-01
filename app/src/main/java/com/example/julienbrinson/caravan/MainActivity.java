package com.example.julienbrinson.caravan;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    //used to load the libraries
    static {
        System.loadLibrary("native-lib");
        //System.loadLibrary("boost-lib");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView tv = (TextView) findViewById(R.id.text);
        tv.setText(stringFromJNI());
    }
    /*
    * A native method from native-lib
    *
     */

    //public native void
    public native String stringFromJNI();
}


