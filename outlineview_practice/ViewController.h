//
//  ViewController.h
//  outlineview_practice
//
//  Created by Kenneth P. Hough on 11/18/17.
//  Copyright © 2017 Evo Group Technologies, Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController <NSOutlineViewDelegate, NSOutlineViewDataSource>

@property (nonatomic, weak) IBOutlet NSOutlineView *myOutlineView;
@property (nonatomic, weak) IBOutlet NSPopUpButton *itemType;
@property (nonatomic, weak) IBOutlet NSTextField *itemName;

@property (nonatomic, strong) NSMutableArray *myDataSource;
@property (nonatomic, strong) NSMutableDictionary *unassignedGroup;

- (IBAction)createItem:(id)sender;
-(IBAction)delete:(id)sender;

@end

