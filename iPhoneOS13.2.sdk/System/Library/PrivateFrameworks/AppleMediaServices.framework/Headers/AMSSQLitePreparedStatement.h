//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLitePreparedStatement : NSObject
{
    const void *_connectionPointer;
    NSString *_SQL;
}

@property(readonly, copy, nonatomic) NSString *SQL; // @synthesize SQL=_SQL;
@property(readonly, nonatomic) const void *connectionPointer; // @synthesize connectionPointer=_connectionPointer;
- (id)initWithConnection:(const void *)arg1 SQL:(id)arg2;

@end

