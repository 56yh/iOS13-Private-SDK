//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID, REDuetContextQuery;
@protocol _CDUserContext;

@interface _REContextRegistration : NSObject
{
    BOOL _registered;
    NSArray *_registrations;
    REDuetContextQuery *_query;
    id <_CDUserContext> _context;
    id /* CDUnknownBlockType */ _callback;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ callback; // @synthesize callback=_callback;
@property(retain, nonatomic) id <_CDUserContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) REDuetContextQuery *query; // @synthesize query=_query;
// - (void).cxx_destruct;
- (void)_evaluateQueryWithRegistration:(BOOL)arg1;
- (void)evaluateQuery;
- (void)deregisterWithContext;
- (void)registerWithContext;
@property(readonly, nonatomic) NSUUID *uuid;
- (void)dealloc;
- (id)initWithQuery:(id)arg1;

@end
