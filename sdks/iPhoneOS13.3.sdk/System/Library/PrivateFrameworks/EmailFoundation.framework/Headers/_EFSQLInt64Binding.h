//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFSQLBinding.h>

@interface _EFSQLInt64Binding : EFSQLBinding
{
    long long _integerValue;
}

@property(readonly, nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
- (void)bindTo:(struct sqlite3_stmt )arg1 withSQLIndex:(int)arg2;
- (id)initWithInt64:(long long)arg1;

@end
