//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ASVGestureDataSource;

@interface ASVGesture : NSObject
{
    _Bool _firstTouchWasOnAsset;
    id <ASVGestureDataSource> _dataSource;
    // Error parsing type: , name: _initialAssetLocationOnScreen
    // Error parsing type: , name: _latestAssetLocationOnScreen
}

// Error parsing type for property latestAssetLocationOnScreen:
// Property attributes: T,N,V_latestAssetLocationOnScreen

// Error parsing type for property initialAssetLocationOnScreen:
// Property attributes: T,N,V_initialAssetLocationOnScreen

@property(nonatomic) _Bool firstTouchWasOnAsset; // @synthesize firstTouchWasOnAsset=_firstTouchWasOnAsset;
@property(nonatomic) __weak id <ASVGestureDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)finishGesture;
- (void)updateGesture;
- (id)initWithDataSource:(id)arg1;

@end

