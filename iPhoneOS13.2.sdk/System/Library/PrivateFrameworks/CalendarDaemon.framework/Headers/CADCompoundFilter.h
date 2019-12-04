//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADFilter.h>

@class NSArray;

@interface CADCompoundFilter : CADFilter
{
    NSArray *_filters;
    long long _operation;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4;
- (_Bool)applicableToEntityType:(int)arg1;
- (_Bool)validate;
- (id)initWithFilters:(id)arg1 operation:(long long)arg2;

@end

