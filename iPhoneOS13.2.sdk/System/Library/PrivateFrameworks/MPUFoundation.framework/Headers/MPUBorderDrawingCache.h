//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPUBorderView, NSCache;

@interface MPUBorderDrawingCache : NSObject
{
    MPUBorderView *_borderView;
    NSCache *_images;
    double _displayScale;
}

@property(nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
- (void)_invalidate;
- (id)_borderView;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (id)imageForBorderConfiguration:(id)arg1;
- (void)dealloc;
- (id)init;

@end

