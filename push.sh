cd Desktop/Project_ACM_final
find ./ -name '*.exe' -type f -print -exec rm -rf {} \;
find ./ -name '*.bin' -type f -print -exec rm -rf {} \;
git add -A
git commit -a -m 'back up'
git push origin main 