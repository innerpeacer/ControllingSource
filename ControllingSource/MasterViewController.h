//
//  MasterViewController.h
//  ControllingSource
//
//  Created by innerpeacer on 14-9-1.
//  Copyright (c) 2014年 Palmap. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

