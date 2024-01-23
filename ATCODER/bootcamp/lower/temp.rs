use proconio::input;

fn main() {
    input! {
        n: usize,
        h: [usize; n],
    }

    let mut s = vec![0; n];

    for i in (0..n - 1).rev() {
        if h[i] >= h[i + 1] {
            s[i] = s[i + 1] + 1;
        } else {
            s[i] = 0;
        }
    }

    println!("{}", s.iter().max().unwrap());
}

