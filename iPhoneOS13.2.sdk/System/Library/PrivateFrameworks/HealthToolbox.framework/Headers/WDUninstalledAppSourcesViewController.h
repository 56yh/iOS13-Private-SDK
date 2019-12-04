//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/HKSourceListDataSourceObserver-Protocol.h>

@class HKSourceListDataSource, NSArray, UIImage, WDProfile;

__attribute__((visibility("hidden")))
@interface WDUninstalledAppSourcesViewController : HKTableViewController <HKSourceListDataSourceObserver>
{
    WDProfile *_profile;
    HKSourceListDataSource *_dataSource;
    NSArray *_uninstalledSources;
}

@property(copy, nonatomic) NSArray *uninstalledSources; // @synthesize uninstalledSources=_uninstalledSources;
@property(retain, nonatomic) HKSourceListDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateUninstalledSources;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
@property(readonly) UIImage *uninistalledAppImage;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

@end

