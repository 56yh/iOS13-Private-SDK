//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, _ICQAlertSpecification, _ICQPageSpecification;

@interface _ICQFlowSpecification : NSObject
{
    _ICQPageSpecification *_startPage;
    NSDictionary *_pagesByIdentifier;
    _ICQAlertSpecification *_startAlert;
}

@property(retain, nonatomic) _ICQAlertSpecification *startAlert; // @synthesize startAlert=_startAlert;
@property(readonly, nonatomic) NSDictionary *pagesByIdentifier; // @synthesize pagesByIdentifier=_pagesByIdentifier;
@property(readonly, nonatomic) _ICQPageSpecification *startPage; // @synthesize startPage=_startPage;
// - (void).cxx_destruct;
- (id)initWithPages:(id)arg1;

@end

