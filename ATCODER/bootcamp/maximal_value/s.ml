let a, b = Scanf.sscanf (read_line ()) "%d %d" (fun a b -> (a, b)) in
let ans = (a + b - 3) / (a - 1) in
print_endline (string_of_int ans)
