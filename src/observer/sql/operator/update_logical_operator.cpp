#include "sql/operator/update_logical_operator.h"

/**
 * @brief update
 * @param table
 * @param value
 * @param field_name
 * @author jzq
 */
UpdateLogicalOperator::UpdateLogicalOperator(Table *table, Value &value, const char *field_name)
    : table_(table), value_(value)
{
  // copy field_name
  field_name_ = new char[strlen(field_name) + 1];
  strcpy(field_name_, field_name);
}