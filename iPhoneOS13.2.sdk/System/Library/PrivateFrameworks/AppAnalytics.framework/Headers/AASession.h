//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface AASession : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: kind
    // Error parsing type: , name: name
    // Error parsing type: , name: startDate
    // Error parsing type: , name: sessionData
}

- (id)init;
@property(nonatomic, readonly) NSDictionary *sessionData;
@property(nonatomic, readonly) NSDate *startDate;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) long long kind; // @synthesize kind;
@property(nonatomic, readonly) NSString *identifier;

@end

