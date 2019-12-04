//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXMovieProvider.h>

@class NSSet;

@interface PXMiroMovieProvider : PXMovieProvider
{
    NSSet *_defaultAssets;
}

+ (void)preloadMiroFrameworkIfNeeded;
+ (void *)_loadMiroFrameworkIfNeeded;
+ (void)initialize;
@property(readonly, nonatomic) NSSet *defaultAssets; // @synthesize defaultAssets=_defaultAssets;
- (id)diagnosticsItemProvider;
- (_Bool)canPlayMovie;
- (id)movieViewController;
- (Class)_miroMovieClass;

@end

