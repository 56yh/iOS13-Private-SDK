//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@interface CNObservable (CNAutocomplete)
- (id)networkObservableWithActivityDidStartHandler:(id /* CDUnknownBlockType */)arg1 activityDidStopHandler:(id /* CDUnknownBlockType */)arg2 timeoutDelay:(double)arg3 subscriptionDelay:(double)arg4 scheduler:(id)arg5;
- (id)localObservableWithScheduler:(id)arg1 doOnTimeout:(id /* CDUnknownBlockType */)arg2;
- (id)localObservableWithScheduler:(id)arg1;
- (id)activityIndicatingObservableWithActivityDidStartHandler:(id /* CDUnknownBlockType */)arg1 activityDidStopHandler:(id /* CDUnknownBlockType */)arg2;
- (id)autocompleteTimeoutAfterDelay:(double)arg1 doOnTimeout:(id /* CDUnknownBlockType */)arg2 scheduler:(id)arg3;
@end

