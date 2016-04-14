package com.example.dan.timemanagement;

import android.app.Activity;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.graphics.BitmapFactory;
import android.net.sip.SipAudioCall;
import android.net.wifi.WifiConfiguration;
import android.os.Bundle;
import android.os.SystemClock;
import android.support.v7.app.AlertDialog;
import android.view.View;
import android.widget.Button;
import android.widget.Chronometer;
import android.widget.TextView;
import android.widget.Toast;

/**
 * Created by Dan on 08.04.2016.
 */
public class TimerActivity extends Activity {
    private TextView rs1;
    private TextView rs2;
    private TextView rs3;

    private TextView it;

    private TextView tt;
    private TextView tt2;

    private Button b2;


    private String aa;
    private String bb;
    private String cc;
    private String dd;
    private String ee;


    public int a1 = 0;
    public int a2 = 0;
    public int a3 = 0;
    public int i = 1;
    public boolean w = true;

    public int vars = 0;
    public int varm = 0;
    public int minute = 0;

    long  time = 0;
    long  time3 = 0;

    int h = 0;
    int m = 0;
    int s = 0;
    String mm,ss,varss,varmm;

    int temporar = 0;
    int temporar2 = 0;

    String str;
    private NotificationManager nm;
    private final int NOTIFICATION_ID = 127;

    int inapoi = 0;


    private Chronometer mChronometer;
    private Chronometer mChronometer2;
    public Chronometer.OnChronometerTickListener mListener;

    private Chronometer mChronometer3;
    public Chronometer.OnChronometerTickListener mListener3;

    public AlertDialog.Builder builder;


    @Override
    protected void onSaveInstanceState(Bundle savedInstanceState) {
        super.onSaveInstanceState(savedInstanceState);
        savedInstanceState.putBoolean("MyBoolean", true);
        savedInstanceState.putDouble("myDouble", 1.9);
        savedInstanceState.putInt("MyInt", 1);
        savedInstanceState.putString("MyString", "Welcome back to Android");

    }


    @Override
    protected void onRestoreInstanceState(Bundle savedInstanceState) {
        super.onRestoreInstanceState(savedInstanceState);
       // super.onRestoreInstanceState(savedInstanceState);
        // Restore UI state from the savedInstanceState.
        // This bundle has also been passed to onCreate.
        boolean myBoolean = savedInstanceState.getBoolean("MyBoolean");
        double myDouble = savedInstanceState.getDouble("myDouble");
        int myInt = savedInstanceState.getInt("MyInt");
        String myString = savedInstanceState.getString("MyString");

        i =Integer.valueOf(getIntent().getStringExtra("d"));
        if(Integer.valueOf(getIntent().getStringExtra("e"))==1){
            w = true;
        }
        if(Integer.valueOf(getIntent().getStringExtra("e"))==0){
            w = false;
        }

        inapoi = 0;
        temporar2 = 1;


    }

    @Override
    protected void onStop() {
        super.onStop();
        /*if(inapoi == 0){
            temporar2 = 0;

       // pom();

        try {
            Thread.sleep(1000*Integer.valueOf(vars)+1000*60*Integer.valueOf(varm));                 //1000 milliseconds is one second.
        } catch(InterruptedException ex) {
            Thread.currentThread().interrupt();



        }

        if(temporar2 == 0){showNotification();}
        }*/

        mChronometer3.setBase(SystemClock.elapsedRealtime());

        mChronometer3.start();
        int h3 = h;
        int m3 = m;
        int s3 = s;

        mChronometer3.setOnChronometerTickListener(new Chronometer.OnChronometerTickListener() {
            @Override
            public void onChronometerTick(Chronometer chronometer) {
                time3 = SystemClock.elapsedRealtime() - mChronometer.getBase();
                //if((int)time3==10){showNotification();}
                int h3 = (int) (time3 / 3600000);
                int m3 = (int) (time3 - h3 * 3600000) / 60000;
                int s3 = (int) (time3 - h3 * 3600000 - m3 * 60000) / 1000;
                //String hh = h < 10 ? "0"+h: h+"";
                String mm3 = m3 < 10 ? "0" + m3 : m3 + "";
                String ss3 = s3 < 10 ? "0" + s3 : s3 + "";
                //mChronometer.setText(hh+":"+mm+":"+ss);
                mChronometer3.setText(mm3 + ":" + ss3);
                int vars3 = Integer.valueOf(ss3);
                int varm3 = Integer.valueOf(mm3);
                int minute3 = Integer.valueOf(mm3);
                if (minute3 >= a1) {
                    mChronometer3.stop();
                    //mChronometer2.setText("00" + ":" + "00");
                    showNotification();
                }




            }});


            }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_timer);

        setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_PORTRAIT);

        i =Integer.valueOf(getIntent().getStringExtra("d"));
        if(Integer.valueOf(getIntent().getStringExtra("e"))==1){
            w = true;
        }
        if(Integer.valueOf(getIntent().getStringExtra("e"))==0){
            w = false;
        }

        inapoi = 0;

        nm = (NotificationManager)getApplicationContext().getSystemService(Context.NOTIFICATION_SERVICE);

        final AlertDialog.Builder builder = new AlertDialog.Builder(this);


        it = (TextView) findViewById(R.id.it);

        b2 = (Button) findViewById(R.id.b2);

        tt = (TextView) findViewById(R.id.tt);
        tt2 = (TextView) findViewById(R.id.tt2);


        /*if (savedInstanceState == null) {
            tt2.setText("Welcome to HelloAndroid!");
        } else {
            tt2.setText("Welcome back.");
        }*/
        temporar = 0;
        temporar2 = 0;

        rs1 = (TextView) findViewById(R.id.rs1);
        rs1.setText(getIntent().getStringExtra("a"));

        rs2 = (TextView) findViewById(R.id.rs2);
        rs2.setText(getIntent().getStringExtra("b"));

        rs3 = (TextView) findViewById(R.id.rs3);
        rs3.setText(getIntent().getStringExtra("c"));

        // a1 =
        a1 = Integer.valueOf(rs1.getText().toString());
        //tt.setText(String.valueOf(a1));
        a2 = Integer.valueOf(rs2.getText().toString());
        a3 = Integer.valueOf(rs3.getText().toString());
        aa = String.valueOf(a1);
        bb = String.valueOf(a2);
        cc = String.valueOf(a3);

        //i = a3;
        // mChronometer.postDelayed(1);

            mChronometer = (Chronometer) findViewById(R.id.chron);
            mChronometer2 = (Chronometer) findViewById(R.id.chron2);
             mChronometer3 = (Chronometer) findViewById(R.id.chron3);

            mChronometer.setBase(SystemClock.elapsedRealtime());

            mChronometer.start();
        mChronometer.setOnChronometerTickListener(new Chronometer.OnChronometerTickListener() {
            @Override
            public void onChronometerTick(Chronometer chronometer) {


                it.setText(String.valueOf(i));

                // do {
                if (w) {
                    tt.setText("Noi amu lucram!!!!");
                    time = SystemClock.elapsedRealtime() - mChronometer.getBase();
                    //time = time * 10;
                    h = (int) (time / 3600000);
                    m = (int) (time - h * 3600000) / 60000;
                    s = (int) (time - h * 3600000 - m * 60000) / 1000;
                    //String hh = h < 10 ? "0"+h: h+"";
                    mm = m < 10 ? "0" + m : m + "";
                    ss = s < 10 ? "0" + s : s + "";
                    //mChronometer.setText(hh+":"+mm+":"+ss);
                    mChronometer.setText(mm + ":" + ss);
                    vars = Integer.valueOf(ss);
                    varm = Integer.valueOf(mm);
                    minute = Integer.valueOf(mm);

                    vars = (int) 60 - vars;
                    varm = (int) a1 - varm - 1;
                    varss = vars < 10 ? "0" + vars : vars + "";
                    varmm = varm < 10 ? "0" + varm : varm + "";

                    mChronometer2.setText(varmm + ":" + varss);

                    if (minute >= a1) {
                        mChronometer.stop();
                        mChronometer2.setText("00" + ":" + "00");
                        ///
                        //showNotification();
                        if(temporar == 0){
                            builder.setTitle("Gata gata!")
                                    .setMessage("Hai odihneste-te un pic")
                                    .setCancelable(true)
                                    .setNegativeButton("Haai", new DialogInterface.OnClickListener() {
                                        @Override
                                        public void onClick(DialogInterface dialog, int which) {
                                            Toast.makeText(getApplicationContext(), "Odihna placuta!!", Toast.LENGTH_SHORT).show();
                                            w = false;
                                            mChronometer.setBase(SystemClock.elapsedRealtime());
                                            time = 0;


                                            mChronometer.start();
                                            temporar = 0;
                                        }
                                    });
                            AlertDialog alert = builder.create();
                            temporar = 1;
                            alert.show();


                        }





                    }
                }
///////////////////
                if (!w) {
                    tt.setText("RelaxTime!!");
                    time = SystemClock.elapsedRealtime() - mChronometer.getBase();
                    //time = time * 10;
                    h = (int) (time / 3600000);
                    m = (int) (time - h * 3600000) / 60000;
                    s = (int) (time - h * 3600000 - m * 60000) / 1000;
                    //String hh = h < 10 ? "0"+h: h+"";
                    mm = m < 10 ? "0" + m : m + "";
                    ss = s < 10 ? "0" + s : s + "";
                    //mChronometer.setText(hh+":"+mm+":"+ss);
                    mChronometer.setText(mm + ":" + ss);
                    vars = Integer.valueOf(ss);
                    varm = Integer.valueOf(mm);
                    minute = Integer.valueOf(mm);

                    vars = (int) 60 - vars;
                    varm = (int) a2 - varm - 1;
                    varss = vars < 10 ? "0" + vars : vars + "";
                    varmm = varm < 10 ? "0" + varm : varm + "";

                    mChronometer2.setText(varmm + ":" + varss);

                    if (minute >= a2) {
                        mChronometer.stop();
                        mChronometer2.setText("00" + ":" + "00");
                        ///
                        //w = true;
                        //mChronometer.setBase(SystemClock.elapsedRealtime());
                        //time = 0;

                        //showNotification();

                        if(temporar == 0){
                            builder.setTitle("Ajunge!!!")
                                    .setMessage("Innapoi la treaba!")
                                    .setCancelable(true)
                                    .setNegativeButton("Laadninka ..", new DialogInterface.OnClickListener() {
                                        @Override
                                        public void onClick(DialogInterface dialog, int which) {
                                            Toast.makeText(getApplicationContext(), "Poehali!", Toast.LENGTH_SHORT).show();
                                            w = true;
                                            mChronometer.setBase(SystemClock.elapsedRealtime());
                                            time = 0;
                                            i++;


                                            mChronometer.start();
                                            temporar = 0;
                                        }
                                    });
                            AlertDialog alert = builder.create();
                            temporar = 1;
                            alert.show();
                        }




                    }


                }

                if (i == a3 + 1) {
                    mChronometer.stop();
                    it.setText(String.valueOf(i - 1));
                    tt.setText("Pomodoro-i gata!");
                    mChronometer.setText("00" + ":" + "00");
                    mChronometer2.setText("00" + ":" + "00");
                    inapoi = 0;



                }
                //}while (i<=a3);


            }

            public Chronometer getChronometer() {
                return mChronometer;
            }
        });


            //pom();
            //  setOnChronometerTickListener(listener)



    }
    public void pom(){

    }

    public void showNotification(){


        if(w){ ee = String.valueOf(Integer.valueOf(0));dd = String.valueOf(Integer.valueOf(i));}
        if(!w){ ee = String.valueOf(Integer.valueOf(1));dd = String.valueOf(Integer.valueOf(++i));}

        Notification.Builder builder = new Notification.Builder(getApplicationContext());
        Intent intent = new Intent(getApplicationContext(),TimerActivity.class);
        intent.putExtra("a", aa);
        intent.putExtra("b", bb);
        intent.putExtra("c", cc);
        intent.putExtra("d", dd);
        intent.putExtra("e", ee);
        //PendingIntent pendingIntent = PendingIntent.getActivities(getApplicationContext(),0,new Intent(),PendingIntent.FLAG_CANCEL_CURRENT);
        //PendingIntent pendingIntent = PendingIntent.getActivity(getApplicationContext(), 0, onRestoreInstanceState(intent),PendingIntent.FLAG_CANCEL_CURRENT);
        PendingIntent pendingIntent = PendingIntent.getActivity(this, 2, intent, PendingIntent.FLAG_UPDATE_CURRENT);


        builder
                .setContentIntent(pendingIntent)
                .setSmallIcon(R.mipmap.ic_launcher)
                .setLargeIcon(BitmapFactory.decodeResource(getApplication().getResources(),R.mipmap.ic_launcher))
                .setTicker("Pomodoro important!!!")
                .setWhen(System.currentTimeMillis())
                .setAutoCancel(true)
                .setContentTitle("Change Duty!")
                .setContentText("Click here to continue!")
                .setProgress(100,100,false);

        Notification notification = builder.build();
        notification.defaults = Notification.DEFAULT_ALL;
        notification.flags = notification.flags | Notification.FLAG_INSISTENT;
        nm.notify(NOTIFICATION_ID,notification);
    }

    public void cancelNotification(View v){
        nm.cancel(NOTIFICATION_ID);
    }

    public void tomain(View view){
        Intent intent = new Intent(this,MainActivity.class);
        startActivity(intent);

        inapoi = 1;
    }
}
