//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface CUNFCAdvertiser : NSObject
{
    _Bool _invalidateCalled;
    NSURL *_advertisementURI;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    id /* block */ _tagStateChangedHandler;
}

@property(copy, nonatomic) id /* block */ tagStateChangedHandler; // @synthesize tagStateChangedHandler=_tagStateChangedHandler;
@property(copy, nonatomic) id /* block */ invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) id /* block */ interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSURL *advertisementURI; // @synthesize advertisementURI=_advertisementURI;
- (void)_invalidateWithError:(id)arg1;
- (void)invalidate;
- (void)activate;
- (id)init;

@end

