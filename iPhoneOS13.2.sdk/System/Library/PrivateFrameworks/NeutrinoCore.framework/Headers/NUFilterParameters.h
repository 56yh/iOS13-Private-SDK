//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface NUFilterParameters : NSObject
{
    NSDictionary *_inputNodes;
    NSDictionary *_settings;
}

@property(copy) NSDictionary *settings; // @synthesize settings=_settings;
@property(copy) NSDictionary *inputNodes; // @synthesize inputNodes=_inputNodes;
- (id)description;
- (id)init;

@end

