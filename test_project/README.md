# Testing Manual

## Login
1. Launch the Editor and enter your email address and press enter. Does the 6 rectangles input filed appear? Did you get an email with a six-digit key.
2. Copy past the 6 digit code and press enter. Does the licence selection page appear with a Trial licence option? 
3. Select the Trial licence and press OK. Does the splash screen of the editor appear? 

## Opening a Project

1. Clone this repository.
2. If the compilation started wait while if it finished. Did it finish succesfully?.
3. Open the project with LVGL Pro and open `screens/screen1/screen1.xml`. Does you so the screen in the preview?
4. Click the Hammer icon to start code export and build manually. Did it finish succesully?
5. Press Ctrl/Cmd+B. Does code export and compilation starts and finishes sucessfully?
6. Press Ctrl/Cmd+E. Does only code export starts and finishes sucessfully?

## File Navigator and Sync

1. Open "h1.xml". Do you see it in the preview?
2. Right click on "components", "New folder", type "headings". Do you see the new folder?
3. Right click on "h1.xml", "Cut", right click on "headings" and "Paste". Did "h1.xml" disappeared from "components", appeared in "headings" and the tab remained open?
4. Right click on "h2.xml", "Copy", right click on "headings" and "Paste". Did "h2.xml" reamined in "components", appeared in "headings"?
5. Open "h3.xml". Do you see it in the preview?
6. Click on "h3.xml" and hit Ctrl+Delete. Do you see a confiration popup to delete?
7. Select "Cancel". Did the popup disapperar and the file remained?
8. Right click on "h3.xml", select Delete, and conform deletion. Did the file disappear and the tab closed?
9. In the file explorer of the operating system copy "h2.xml" as "h3.xml". Does "h3.xml" appear in the editor's file tree?
10. Open "h3.xml" and change "noto_regular_24" to "noto_regular_16." Do you see "H2 text" in the preview with a smaller font?
11. Change "H2 text" to "H3 text" in the `<api>` `<prop>`. Does the preview update?
12. Open "h1.c" in the editor. Do you see the source code with syntax highlight?
13. Right click on "h1.c", Select rename, eneter "new_h1.c" and hit enter. Did the new name set, and tab name updated?  
14. Remove the C and H files of h1, h2, and h3 from the component folder usig the operating system's file navigator. Did the files disappear in the editor's preview and the h1 tab disappered?
15. Hit Ctrl/Cmd+B. Do you see the new C/H files of the heading, the compilation finished succesfully?
16. Open "h1_gen.c" in the editor. Using the operating system's file explorer delete its content. Does content appear automatically in th editor? 
17. Open "h2_gen.c" in the editor, delete its content, and hit Ctrl/Cmd+B. Do you see the "Unsaved changes" dialog?
18. Click Cancel. Check if compliation does not start.
19. Hit Ctrl/Cmd+S again and select Save all. Does compliation start and soes content appear again automatically? 
20. Add just a space character in "h2_gen.c". Hit Ctrl+Shift+O to open the spash screen. Does the "Unsaved changes" dialog appear again?
21. Click Cancel. Does it return to the file?
22. Hit Ctrl+Shift+O again and select "Save all". Does you see the spash screen?
23. Press Esc. Did you get back to "h2_gen.c"?

## Tab Navigator

1. Open all C and H files of the headings. Is the tab bar scrollable? 
2. Scroll to the right and select the first C file from the file tree. Did the tab bar scroll to the tab automatically?
3. Open "h1.xml". Did the tab bar scroll to the new file autotmatically?
4. Right click on tab, and select close. Did it close?
5. Hover on a tab and click the close button. Did the tab close?
6. Hit Ctr+W. Did the tab disappear?
7. Right click on a tab, select Close others. Did all the otther bar close?
8. Right click on the remaining tab and select Close all. Did all tab disappear?

## Validation and Autocomplete
1. Open "screen1.xml". Does it open without any validation error?
2. Go the value of "screen_border_width" constant and check it's value by Ctrl+Up/Down. Does it change by one?
3. Go the value of "screen_border_width" constant and check it's value by Ctrl+Shift+Up/Down. Does it change by 10?
4. Click on the colour of "border_color" in "style_light". Do you see the colour picker showing up?
5. Adjust the colour. Do you see it changing in the preview?
6. Click on a line to make the colour picker disappear and hit Ctrl+Z to undo. Do you see the old colour reverted?
7. Hit (Shift+)Ctrl+Y for redo. Do you see the colour you have selected?
8. Add a letter "X" in an empty line between XML tags, hit Ctrl+S and hit Ctrl+B. Do you see an error message in the console?
9. Remove "X". Is the preview active again?
10. Change `<screen>` to `<scr>`. Do you see a red underline indicating a validation error and the preview deactivated?
11. Press Ctrl+Space. Do you see "screen" shown as an autocomplete option with a wrench icon and can select it with arrows and Enter pressed? Do it. Is the preview active again?
12. Change `name` key in const `<int name="screen_border_width"` to `na`. Do you see a red underline indicating a validation error and the preview deactivated?
13. Press only "m" (to see `nam`). Do you see "name" shown as an autocomplete option with a wrench icon and can select "name" by clicking on it? Do it. Is the preview active again?
14. Do you see `<int name="screen_border_width"` right after selecting "name" from the autocomplete list (and no messed up property names and values)?
15. Change `<lv_spangroup-span text=":" />` to `<lv_spangroup-span te=":" />`. Do you see a red underline indicating a validation error and the preview deactivated?
16. Add "x" to see "tex". Do you see "text" is recommended with a wrench icon and can select it with arrows and enter? Do it. Is the preview active again?
17. Change `<lv_spangroup-span bind_text="hour"` to `<lv_spangroup-span bind_text="h"`. Do you see a red underline indicating a validation error and the preview deactivated?
18. Press Ctrl+Space. Do you see "hour" shown and can select it by clicking on it?
19. Do it. In `<my_button>` start typing "play_timeline". Does you see autocomplete suggestion?
20. Add "target". Do you see "empty" automatically suggested and can you select it?
21. Do it. Add "timeline". Do you see only "shake" is automatically suggested and can you select it?
22. Do it. Change "shake" to "shake2". Do you see a validation error?
23. Change back "shake2" to "shake" and change target to "lv_button_0". Do you see a validation error?
24. Change back the target to "empty". Are there no validation errors?
 
## Subjects
1. Open "screen1.xml" and select the Subject panel. Do you see "clock_title", "dark_theme", "hour", "minutes", "show_clock" in the "Used in selected preview" section. Check if there is nothing in the "Rest in this project" section.
2. Open "globals.xml" and add `<int name="dummy" value="5"/>` and go back to "screen1.xml". Do you see dummy showing only in "Used in selected preview" sction?
3. Open "globals.xml" again, remove the the dummy subject. Is dummy removed from screen1's subject panel too?
4. On the subject go the value of "hour", and adjust it with up/down arrows. Do you see preview changing accordingly?
5. Delete the value and type "56". Do you see preview changing accordingly?
6. Close "screen1.xml" and open it again. Do you see the preview showing "10:20" clock and subject panel is showing the correct values too?

## Fonts
TODO 

## Images
TODO

## Tests
1. Open "components/my_button/test.xml". Does it open without any errors?
2. Open the Test panel and click the play button. Does the test run without errors?
3. Add `style_bg_color="0x0f0"` to the `view` and rerun the tests. Do you see the screen shot error and "start_err.png" created?
4. Open "start_err.png". Do you see the image in the editor with the green button?
5. Open the failed test on the test panel, check the differences and replace, click "Replace Expected". Did "start_err.png" disappear?
6. Run the tests again. Does it run without error?

## Translations
1. Open "screen1.xml". Does the blue button have "Hey!" text?
2. In the preview change the language to "de". Does the button's text update to "Hallo!"?
3. Open the Translations panel. Do you see only "In this file" with a line for "greeting"?
4. Change "Hallo!" "Willkommen" and wait a little. Do you see it updated and still "de" selected? 
5. Add "aaaaaaaaaaa" after "Willkommen" and hit enter quickly. Do you see it updating immediately and still "de" selected? 
6. Go to "translations.xml". Do you see the validation error?
7. Hit Ctrl+E. Does the code export fail with a log in the console?
8. Change the text back to "Willkommen" in "translations.xml". Does the validation error disappear?
9. Go back to "screen1.xml" and select "de". Do you see "Willkommen"?
10. In "translations.xml" add `<translation tag="not_used" en="Unused!" de="Unbenutzt" char_count="10" />`. Do you see it appearing in "In this project" section in screen1's translation panel?

## Preview
1. Open "my_button.xml". Is the light preview selected by default?
2. Select the dark preview. Is the "dark_theme=1" set (see the subject panel)? Did the the text of the button change to white? Is the preview scaled automatically to fit to the screen?
3. Change the radius of "style_main" to "10". Is still the dark preview selected with fit to screen?
4. Use Ctrl+Scroll to zoom in/put in the preview? Does the preview zoom?
5. Hit Ctrl+Shift+0. Does the preview fit to screen again?
6. Add "height="800"" to the light preview. Does it fit to screen automatically?
7. Close "my_button.xml" and open it again. Does it open with fit to screen? 

## Animations
1. Open "screen1.xml" and click "Hey!" button. Does the "Empty" button shake starting to the right?
2. Long press "Hey!". Does "Empty" shake starting to the left?

## Inspector
1. Use Ctrl/Cmd action in Inspector. Does it work?
2. Measure element in Inspector. Does it work?
3. Double-click element in Inspector. Does it open correctly?
4. Use ‘Jump to code’ in Inspector. Does it work?

## Figma Sync
// TODO

## Free Work
1. Create a new file called "screen2.xml".
1. Recreate "screen1.xml" without using any copy and paste steps. Use autocomplete as much as possible. Did all autocompletion work and the preview was stable?

## Online Preview
// TODO
