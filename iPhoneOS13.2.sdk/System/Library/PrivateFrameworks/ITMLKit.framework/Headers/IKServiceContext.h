//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElement, NSDictionary;

@interface IKServiceContext : NSObject
{
    NSDictionary *_contextDictionary;
    IKViewElement *_element;
}

@property(readonly, nonatomic) IKViewElement *element; // @synthesize element=_element;
@property(readonly, copy, nonatomic) NSDictionary *contextDictionary; // @synthesize contextDictionary=_contextDictionary;
- (id)initWithContextDictionary:(id)arg1 element:(id)arg2;

@end

