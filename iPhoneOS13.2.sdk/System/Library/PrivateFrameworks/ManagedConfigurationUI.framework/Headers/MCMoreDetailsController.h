//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface MCMoreDetailsController : PSListController
{
    UIImage *_iconImage;
}

@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (id)_specifierForPayload:(id)arg1;

@end

