//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray;

@interface SiriCoreSQLiteQueryOrder : NSObject <NSCopying>
{
    long long _mode;
    NSArray *_columnNames;
}

@property(readonly, copy, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColumnNames:(id)arg1 mode:(long long)arg2;

@end

