//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, _SBStatusBarTapApplicationDestination;

@interface _SBStatusBarTapHandler : NSObject
{
    NSURL *_url;
    id /* block */ _block;
    _SBStatusBarTapApplicationDestination *_appDestination;
    _SBStatusBarTapApplicationDestination *_applicationDestination;
}

@property(readonly, copy, nonatomic) _SBStatusBarTapApplicationDestination *applicationDestination; // @synthesize applicationDestination=_applicationDestination;
- (_Bool)handleTap;
@property(readonly, nonatomic) _Bool canRequestUnlock;
- (id)initWithApplicationDestination:(id)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithURL:(id)arg1;

@end

