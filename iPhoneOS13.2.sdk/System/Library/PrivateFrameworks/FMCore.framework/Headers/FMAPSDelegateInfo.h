//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol FMAPSDelegate;

__attribute__((visibility("hidden")))
@interface FMAPSDelegateInfo : NSObject
{
    NSString *_topic;
    id <FMAPSDelegate> _delegate;
}

@property(nonatomic) __weak id <FMAPSDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;

@end

