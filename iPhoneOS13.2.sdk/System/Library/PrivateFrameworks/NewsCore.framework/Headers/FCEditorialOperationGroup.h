//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;
@protocol FCSectionProviding;

@interface FCEditorialOperationGroup : NSObject
{
    id <FCSectionProviding> _section;
    NSArray *_headlines;
    NSDate *_publishDate;
}

@property(retain, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(retain, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
@property(retain, nonatomic) id <FCSectionProviding> section; // @synthesize section=_section;

@end

