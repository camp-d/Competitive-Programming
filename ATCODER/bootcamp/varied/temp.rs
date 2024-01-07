use proconio::input;
use std::collections::HashSet;

fn main() {
  input! {
    s: String,
  }
  let char_set: HashSet<char> = s.chars().collect();
  println!("{}",
  match char_set.len() == s.len() {
    true => "yes".to_string(),
    false => "no".to_string(),
  });
}
