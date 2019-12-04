//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/BKSTerminationAssertionObserver-Protocol.h>

@class NSString;
@protocol FBApplicationTerminationAssertionServiceDelegate;

@interface FBApplicationTerminationAssertionService : NSObject <BKSTerminationAssertionObserver>
{
    id <FBApplicationTerminationAssertionServiceDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <FBApplicationTerminationAssertionServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_reasonForEfficacy:(unsigned long long)arg1;
- (unsigned long long)_efficacyForReason:(id)arg1;
- (void)_notifyDelegateOfRelinquishForBundleID:(id)arg1;
- (void)_notifyDelegateOfAcquisitionForBundleID:(id)arg1 efficacy:(unsigned long long)arg2;
- (void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (id)terminationAssertionsForBundleID:(id)arg1 withReason:(id)arg2;
- (id)terminationAssertionsForBundleID:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

