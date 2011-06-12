//
//  DetailViewController.h
//  TabletPuppy
//
//  Created by Jeffrey Linwood on 6/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ATPagingView.h"

@interface DetailViewController : UIViewController <UIPopoverControllerDelegate, UISplitViewControllerDelegate> {
    
    UIPopoverController *popoverController;
    UIToolbar *toolbar;
    
    id detailItem;
    UIWebView *detailDescription;
	UILabel *detailTitle;
	ATPagingView *pagingView;
}

@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;

@property (nonatomic, retain) id detailItem;
@property (nonatomic, retain) IBOutlet UIWebView *detailDescription;
@property (nonatomic, retain) IBOutlet UILabel *detailTitle;
@property (nonatomic, retain) IBOutlet ATPagingView *pagingView;

@end
