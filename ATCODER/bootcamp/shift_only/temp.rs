// -*- coding:utf-8-unix -*-

use proconio::input;
use proconio::marker::Chars;

use num_traits::{Num, FromPrimitive};
fn floor<T>(x: T, m: T)->T where T: Copy+Num,{let r = (x%m+m)%m;(x-r)/m}
fn ceil<T>(x: T, m: T)->T where T:Copy+Num+FromPrimitive{floor(x+m-T::from_i8(1).unwrap(), m)}
fn chmax<T: PartialOrd+Copy>(a: &mut T, b: &T)->bool{if *a<*b {*a=b.clone(); true}else {false}}
fn chmin<T: PartialOrd+Copy>(a: &mut T, b: &T)->bool{if *a>*b {*a=b.clone(); true}else {false}}

fn main() {
    input! {
        n: i32,
        mut A: [i32; n],
    }

    let mut ans=0;
    'l: loop {
        for x in A.iter_mut(){
            if *x%2==0{ *x/=2;}
            else {break 'l;}
        }
        ans+=1;
    }
    println!("{}",ans);
        
}

