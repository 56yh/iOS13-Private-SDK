//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/EQKitMathMLNode.h>

#import <iWorkImport/EQKitLayoutSchemataTr-Protocol.h>
#import <iWorkImport/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMTr : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataTr>
{
    NSArray *mChildren;
}

- (id)layoutStyleNode;
- (id)schemataChildren;
@property(readonly, copy) NSString *description;
- (_Bool)isBaseFontNameUsed;
- (struct Schemata)layoutSchemata;
- (void)dealloc;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithChildren:(id)arg1 node:(struct _xmlNode *)arg2;
- (id)initWithChildren:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

