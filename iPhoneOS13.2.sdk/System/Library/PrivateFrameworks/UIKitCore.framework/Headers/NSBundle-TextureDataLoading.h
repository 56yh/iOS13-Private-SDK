//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSBundle (TextureDataLoading)
+ (id)currentNibLoadingBundle;
+ (void)popNibLoadingBundle;
+ (void)pushNibLoadingBundle:(id)arg1;
+ (id)currentNibPath;
+ (void)popNibPath;
+ (void)pushNibPath:(id)arg1;
- (id)dataForResourceName:(id)arg1;
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;
@end

