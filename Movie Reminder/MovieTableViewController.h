//
//  MovieTableViewController.h
//  Movie Reminder
//
//  Created by Ruchi Varshney on 11/28/11.
//  Copyright (c) 2011 Stanford University. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreDataTableViewController.h"

typedef enum {
	MovieTableViewNowPlaying,
	MovieTableViewComingSoon,
	MovieTableViewMyMovies,
} MovieTableViewType;

@interface MovieTableViewController : CoreDataTableViewController

@property MovieTableViewType type;

- (void)startSpinner:(NSString *)activity;
- (void)stopSpinner;

@end
