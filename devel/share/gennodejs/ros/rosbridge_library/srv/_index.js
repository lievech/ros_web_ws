
"use strict";

let TestResponseOnly = require('./TestResponseOnly.js')
let TestRequestOnly = require('./TestRequestOnly.js')
let SendBytes = require('./SendBytes.js')
let TestMultipleResponseFields = require('./TestMultipleResponseFields.js')
let AddTwoInts = require('./AddTwoInts.js')
let TestNestedService = require('./TestNestedService.js')
let TestArrayRequest = require('./TestArrayRequest.js')
let TestMultipleRequestFields = require('./TestMultipleRequestFields.js')
let TestRequestAndResponse = require('./TestRequestAndResponse.js')
let TestEmpty = require('./TestEmpty.js')

module.exports = {
  TestResponseOnly: TestResponseOnly,
  TestRequestOnly: TestRequestOnly,
  SendBytes: SendBytes,
  TestMultipleResponseFields: TestMultipleResponseFields,
  AddTwoInts: AddTwoInts,
  TestNestedService: TestNestedService,
  TestArrayRequest: TestArrayRequest,
  TestMultipleRequestFields: TestMultipleRequestFields,
  TestRequestAndResponse: TestRequestAndResponse,
  TestEmpty: TestEmpty,
};
