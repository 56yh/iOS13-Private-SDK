//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CorePDF/CPVisitor-Protocol.h>

__attribute__((visibility("hidden")))
@interface CPGenericVisitor : NSObject <CPVisitor>
{
}

- (void)visitShapeRegion:(id)arg1;
- (void)visitImageRegion:(id)arg1;
- (void)visitTextBox:(id)arg1;
- (void)visitColumn:(id)arg1;
- (void)visitLayoutArea:(id)arg1;
- (void)visitParagraph:(id)arg1;
- (void)visitBody:(id)arg1;
- (void)visitRotation:(id)arg1;
- (void)visitZone:(id)arg1;
- (void)visitTextLine:(id)arg1;
- (void)visitRegion:(id)arg1;
- (void)visitPage:(id)arg1;
- (void)visitCompoundGraphic:(id)arg1;
- (void)visitImage:(id)arg1;
- (void)visitShape:(id)arg1;
- (void)visitChunk:(id)arg1;

@end

