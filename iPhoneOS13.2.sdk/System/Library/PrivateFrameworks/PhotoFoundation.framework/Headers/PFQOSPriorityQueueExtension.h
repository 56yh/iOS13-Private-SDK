//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoFoundation/PFPriorityQueueExtension.h>

#import <PhotoFoundation/PFQOSPriorityEnqueuing-Protocol.h>

@interface PFQOSPriorityQueueExtension : PFPriorityQueueExtension <PFQOSPriorityEnqueuing>
{
}

- (void)enqueueWithQOSPriority:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)enqueueWithCurrentQOSPriority:(id /* block */)arg1;
- (id)initWithConcurrentScheduling:(_Bool)arg1;

@end

