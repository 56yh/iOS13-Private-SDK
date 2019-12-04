//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BKSTouchDeliveryObserving_IPC-Protocol.h>

@class BSMutableIntegerMap, BSServiceConnection, NSHashTable, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface BKSTouchDeliveryObservationService : NSObject <BKSTouchDeliveryObserving_IPC>
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_touchClientQueue;
    BSServiceConnection *_connection;
    BSMutableIntegerMap *_touchIdentifierToObserverLists;
    NSMapTable *_observersToTouchIdentifiers;
    NSHashTable *_generalObservers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *generalObservers; // @synthesize generalObservers=_generalObservers;
@property(retain, nonatomic) NSMapTable *observersToTouchIdentifiers; // @synthesize observersToTouchIdentifiers=_observersToTouchIdentifiers;
@property(retain, nonatomic) BSMutableIntegerMap *touchIdentifierToObserverLists; // @synthesize touchIdentifierToObserverLists=_touchIdentifierToObserverLists;
@property(retain, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
- (void)observeTouchEventDeliveryDidOccur:(id)arg1;
- (void)_connectToTouchDeliveryService;
- (_Bool)_queue_removeObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (_Bool)_queue_addObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (void)_queue_removeObserversForTouchIdentifier:(unsigned int)arg1;
- (id)_queue_observersForTouchIdentifier:(unsigned int)arg1;
- (oneway void)removeObserver:(id)arg1;
- (oneway void)addObserver:(id)arg1 forTouchIdentifier:(unsigned int)arg2;
- (oneway void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

