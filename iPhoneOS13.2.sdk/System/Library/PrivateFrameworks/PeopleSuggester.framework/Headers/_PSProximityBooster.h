//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RPPeopleDiscovery;

@interface _PSProximityBooster : NSObject
{
    RPPeopleDiscovery *_peopleDiscovery;
}

@property(retain, nonatomic) RPPeopleDiscovery *peopleDiscovery; // @synthesize peopleDiscovery=_peopleDiscovery;
- (id)suggestionsByBoostingNearbySuggestions:(id)arg1;
- (void)stopMonitoringProximity;
- (void)startMonitoringProximity;
- (id)init;

@end

