//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ICURLBagMescalConfiguration : NSObject
{
    _Bool _shouldSignBody;
    NSArray *_fields;
    NSArray *_headers;
}

@property(copy, nonatomic) NSArray *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSArray *fields; // @synthesize fields=_fields;
@property(nonatomic) _Bool shouldSignBody; // @synthesize shouldSignBody=_shouldSignBody;
- (id)description;

@end

